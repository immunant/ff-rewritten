/**
 * @license
 * Copyright 2024 Google Inc.
 * SPDX-License-Identifier: Apache-2.0
 */
import {describe, it} from 'node:test';

import expect from 'expect';

import {
  MULTI_LIBRARY_OPTIONS,
  buildTestingTree,
  getAngularJsonScripts,
  getMultiApplicationFile,
  getMultiLibraryFile,
  getPackageJson,
  runSchematic,
  setupHttpHooks,
} from './utils.js';

void describe('@puppeteer/ng-schematics: ng-add', () => {
  setupHttpHooks();

  void describe('Single Project', () => {
    void it('should create base files and update to "package.json"', async () => {
      const tree = await buildTestingTree('ng-add');
      const {devDependencies, scripts} = getPackageJson(tree);
      const {builder, configurations} = getAngularJsonScripts(tree);

      expect(tree.files).toContain('/e2e/tsconfig.json');
      expect(tree.files).toContain('/e2e/tests/app.e2e.ts');
      expect(tree.files).toContain('/e2e/tests/utils.ts');
      expect(devDependencies).toContain('puppeteer');
      expect(scripts['e2e']).toBe('ng e2e');
      expect(builder).toBe('@puppeteer/ng-schematics:puppeteer');
      expect(configurations).toEqual({
        production: {
          devServerTarget: 'sandbox:serve:production',
        },
      });
    });
    void it('should update create proper "ng" command for non default tester', async () => {
      let tree = await buildTestingTree('ng-add', 'single');
      // Re-run schematic to have e2e populated
      tree = await runSchematic(tree, 'ng-add');
      const {scripts} = getPackageJson(tree);
      const {builder} = getAngularJsonScripts(tree, false);

      expect(scripts['puppeteer']).toBe('ng run sandbox:puppeteer');
      expect(builder).toBe('@puppeteer/ng-schematics:puppeteer');
    });
    void it('should not create Puppeteer config', async () => {
      const {files} = await buildTestingTree('ng-add', 'single');

      expect(files).not.toContain('/.puppeteerrc.cjs');
    });
    void it('should create Jasmine files and update "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'single', {
        testRunner: 'jasmine',
      });
      const {devDependencies} = getPackageJson(tree);
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain('/e2e/jasmine.json');
      expect(devDependencies).toContain('jasmine');
      expect(options['testRunner']).toBe('jasmine');
    });
    void it('should create Jest files and update "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'single', {
        testRunner: 'jest',
      });
      const {devDependencies} = getPackageJson(tree);
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain('/e2e/jest.config.js');
      expect(devDependencies).toContain('jest');
      expect(devDependencies).toContain('@types/jest');
      expect(options['testRunner']).toBe('jest');
    });
    void it('should create Mocha files and update "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'single', {
        testRunner: 'mocha',
      });
      const {devDependencies} = getPackageJson(tree);
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain('/e2e/.mocharc.js');
      expect(devDependencies).toContain('mocha');
      expect(devDependencies).toContain('@types/mocha');
      expect(options['testRunner']).toBe('mocha');
    });
    void it('should create Node files', async () => {
      const tree = await buildTestingTree('ng-add', 'single', {
        testRunner: 'node',
      });
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain('/e2e/.gitignore');
      expect(tree.files).not.toContain('/e2e/tests/app.e2e.ts');
      expect(tree.files).toContain('/e2e/tests/app.test.ts');
      expect(options['testRunner']).toBe('node');
    });
    void it('should create TypeScript files', async () => {
      const tree = await buildTestingTree('ng-add', 'single');
      const tsConfigPath = '/e2e/tsconfig.json';
      const tsConfig = tree.readJson(tsConfigPath);

      expect(tree.files).toContain(tsConfigPath);
      expect(tsConfig).toMatchObject({
        extends: '../tsconfig.json',
        compilerOptions: {
          module: 'NodeNext',
          moduleResolution: 'NodeNext',
        },
      });
    });
    void it('should not create port value', async () => {
      const tree = await buildTestingTree('ng-add');

      const {options} = getAngularJsonScripts(tree);
      expect(options['port']).toBeUndefined();
    });
  });

  void describe('Multi projects Application', () => {
    void it('should create base files and update to "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'multi');
      const {devDependencies, scripts} = getPackageJson(tree);
      const {builder, configurations} = getAngularJsonScripts(tree);

      expect(tree.files).toContain(
        getMultiApplicationFile('e2e/tsconfig.json'),
      );
      expect(tree.files).toContain(
        getMultiApplicationFile('e2e/tests/app.e2e.ts'),
      );
      expect(tree.files).toContain(
        getMultiApplicationFile('e2e/tests/utils.ts'),
      );
      expect(devDependencies).toContain('puppeteer');
      expect(scripts['e2e']).toBe('ng e2e');
      expect(builder).toBe('@puppeteer/ng-schematics:puppeteer');
      expect(configurations).toEqual({
        production: {
          devServerTarget: 'sandbox:serve:production',
        },
      });
    });
    void it('should update create proper "ng" command for non default tester', async () => {
      let tree = await buildTestingTree('ng-add', 'multi');
      // Re-run schematic to have e2e populated
      tree = await runSchematic(tree, 'ng-add');
      const {scripts} = getPackageJson(tree);
      const {builder} = getAngularJsonScripts(tree, false);

      expect(scripts['puppeteer']).toBe('ng run sandbox:puppeteer');
      expect(builder).toBe('@puppeteer/ng-schematics:puppeteer');
    });
    void it('should not create Puppeteer config', async () => {
      const {files} = await buildTestingTree('ng-add', 'multi');

      expect(files).not.toContain(getMultiApplicationFile('.puppeteerrc.cjs'));
      expect(files).not.toContain('/.puppeteerrc.cjs');
    });
    void it('should create Jasmine files and update "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'multi', {
        testRunner: 'jasmine',
      });
      const {devDependencies} = getPackageJson(tree);
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain(getMultiApplicationFile('e2e/jasmine.json'));
      expect(devDependencies).toContain('jasmine');
      expect(options['testRunner']).toBe('jasmine');
    });
    void it('should create Jest files and update "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'multi', {
        testRunner: 'jest',
      });
      const {devDependencies} = getPackageJson(tree);
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain(
        getMultiApplicationFile('e2e/jest.config.js'),
      );
      expect(devDependencies).toContain('jest');
      expect(devDependencies).toContain('@types/jest');
      expect(options['testRunner']).toBe('jest');
    });
    void it('should create Mocha files and update "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'multi', {
        testRunner: 'mocha',
      });
      const {devDependencies} = getPackageJson(tree);
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain(getMultiApplicationFile('e2e/.mocharc.js'));
      expect(devDependencies).toContain('mocha');
      expect(devDependencies).toContain('@types/mocha');
      expect(options['testRunner']).toBe('mocha');
    });
    void it('should create Node files', async () => {
      const tree = await buildTestingTree('ng-add', 'multi', {
        testRunner: 'node',
      });
      const {options} = getAngularJsonScripts(tree);

      expect(tree.files).toContain(getMultiApplicationFile('e2e/.gitignore'));
      expect(tree.files).not.toContain(
        getMultiApplicationFile('e2e/tests/app.e2e.ts'),
      );
      expect(tree.files).toContain(
        getMultiApplicationFile('e2e/tests/app.test.ts'),
      );
      expect(options['testRunner']).toBe('node');
    });
    void it('should create TypeScript files', async () => {
      const tree = await buildTestingTree('ng-add', 'multi');
      const tsConfigPath = getMultiApplicationFile('e2e/tsconfig.json');
      const tsConfig = tree.readJson(tsConfigPath);

      expect(tree.files).toContain(tsConfigPath);
      expect(tsConfig).toMatchObject({
        extends: '../../../tsconfig.json',
        compilerOptions: {
          module: 'NodeNext',
          moduleResolution: 'NodeNext',
        },
      });
    });
    void it('should not create port value', async () => {
      const tree = await buildTestingTree('ng-add');

      const {options} = getAngularJsonScripts(tree);
      expect(options['port']).toBeUndefined();
    });
  });

  void describe('Multi projects Library', () => {
    void it('should create base files and update to "package.json"', async () => {
      const tree = await buildTestingTree('ng-add', 'multi');
      const config = getAngularJsonScripts(
        tree,
        true,
        MULTI_LIBRARY_OPTIONS.name,
      );

      expect(tree.files).not.toContain(
        getMultiLibraryFile('e2e/tsconfig.json'),
      );
      expect(tree.files).not.toContain(
        getMultiLibraryFile('e2e/tests/app.e2e.ts'),
      );
      expect(tree.files).not.toContain(
        getMultiLibraryFile('e2e/tests/utils.ts'),
      );
      expect(config).toBeUndefined();
    });

    void it('should not create Puppeteer config', async () => {
      const {files} = await buildTestingTree('ng-add', 'multi');

      expect(files).not.toContain(getMultiLibraryFile('.puppeteerrc.cjs'));
      expect(files).not.toContain('/.puppeteerrc.cjs');
    });
  });
});
