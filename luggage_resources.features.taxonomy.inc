<?php
/**
 * @file
 * luggage_resources.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function resources_taxonomy_default_vocabularies() {
  return array(
    'meta_keywords' => array(
      'name' => 'Meta Keywords',
      'machine_name' => 'meta_keywords',
      'description' => 'Retrieved Meta Tag Keywords.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
