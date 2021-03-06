/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


        /**
         * adb_getScenariosResponse.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_getScenariosResponse.h"
        
               /*
                * implmentation of the getScenariosResponse|http://service.config.security.carbon.wso2.org element
                */
           


        struct adb_getScenariosResponse
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            adb_SecurityScenarioDataWrapper_t* property_return;

                
                axis2_bool_t is_valid_return;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_getScenariosResponse_t* AXIS2_CALL
        adb_getScenariosResponse_create(
            const axutil_env_t *env)
        {
            adb_getScenariosResponse_t *_getScenariosResponse = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _getScenariosResponse = (adb_getScenariosResponse_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_getScenariosResponse_t));

            if(NULL == _getScenariosResponse)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_getScenariosResponse, 0, sizeof(adb_getScenariosResponse_t));

            _getScenariosResponse->property_Type = axutil_strdup(env, "adb_getScenariosResponse");
            _getScenariosResponse->property_return  = NULL;
                  _getScenariosResponse->is_valid_return  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "getScenariosResponse",
                        "http://service.config.security.carbon.wso2.org",
                        NULL);
                _getScenariosResponse->qname = qname;
            

            return _getScenariosResponse;
        }

        adb_getScenariosResponse_t* AXIS2_CALL
        adb_getScenariosResponse_create_with_values(
            const axutil_env_t *env,
                adb_SecurityScenarioDataWrapper_t* _return)
        {
            adb_getScenariosResponse_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_getScenariosResponse_create(env);

            
              status = adb_getScenariosResponse_set_return(
                                     adb_obj,
                                     env,
                                     _return);
              if(status == AXIS2_FAILURE) {
                  adb_getScenariosResponse_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_SecurityScenarioDataWrapper_t* AXIS2_CALL
                adb_getScenariosResponse_free_popping_value(
                        adb_getScenariosResponse_t* _getScenariosResponse,
                        const axutil_env_t *env)
                {
                    adb_SecurityScenarioDataWrapper_t* value;

                    
                    
                    value = _getScenariosResponse->property_return;

                    _getScenariosResponse->property_return = (adb_SecurityScenarioDataWrapper_t*)NULL;
                    adb_getScenariosResponse_free(_getScenariosResponse, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_getScenariosResponse_free(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env)
        {
            
            
            return adb_getScenariosResponse_free_obj(
                _getScenariosResponse,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getScenariosResponse_free_obj(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, AXIS2_FAILURE);

            if (_getScenariosResponse->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _getScenariosResponse->property_Type);
            }

            adb_getScenariosResponse_reset_return(_getScenariosResponse, env);
            
              if(_getScenariosResponse->qname)
              {
                  axutil_qname_free (_getScenariosResponse->qname, env);
                  _getScenariosResponse->qname = NULL;
              }
            

            if(_getScenariosResponse)
            {
                AXIS2_FREE(env->allocator, _getScenariosResponse);
                _getScenariosResponse = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_getScenariosResponse_deserialize(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_getScenariosResponse_deserialize_obj(
                _getScenariosResponse,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getScenariosResponse_deserialize_obj(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for getScenariosResponse : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _getScenariosResponse-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for getScenariosResponse : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_getScenariosResponse-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building return element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "return", "http://service.config.security.carbon.wso2.org", NULL);
                                 

                           if (adb_SecurityScenarioDataWrapper_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SecurityScenarioDataWrapper");

                                      status =  adb_SecurityScenarioDataWrapper_deserialize((adb_SecurityScenarioDataWrapper_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element return");
                                      }
                                      else
                                      {
                                          status = adb_getScenariosResponse_set_return(_getScenariosResponse, env,
                                                                   (adb_SecurityScenarioDataWrapper_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for return ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_getScenariosResponse_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_getScenariosResponse_declare_parent_namespaces(
                    adb_getScenariosResponse_t* _getScenariosResponse,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_getScenariosResponse_serialize(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_getScenariosResponse_serialize_obj(
                    _getScenariosResponse, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_getScenariosResponse_serialize_obj(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://service.config.security.carbon.wso2.org",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://service.config.security.carbon.wso2.org", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "getScenariosResponse", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://service.config.security.carbon.wso2.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://service.config.security.carbon.wso2.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://service.config.security.carbon.wso2.org",
                                            p_prefix));
                       }
                      

                   if (!_getScenariosResponse->is_valid_return)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("return"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("return")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing return element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sreturn",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sreturn>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_SecurityScenarioDataWrapper_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_SecurityScenarioDataWrapper_serialize(_getScenariosResponse->property_return, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SecurityScenarioDataWrapper_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_SecurityScenarioDataWrapper_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for return by  Property Number 1
             */
            adb_SecurityScenarioDataWrapper_t* AXIS2_CALL
            adb_getScenariosResponse_get_property1(
                adb_getScenariosResponse_t* _getScenariosResponse,
                const axutil_env_t *env)
            {
                return adb_getScenariosResponse_get_return(_getScenariosResponse,
                                             env);
            }

            /**
             * getter for return.
             */
            adb_SecurityScenarioDataWrapper_t* AXIS2_CALL
            adb_getScenariosResponse_get_return(
                    adb_getScenariosResponse_t* _getScenariosResponse,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, NULL);
                  

                return _getScenariosResponse->property_return;
             }

            /**
             * setter for return
             */
            axis2_status_t AXIS2_CALL
            adb_getScenariosResponse_set_return(
                    adb_getScenariosResponse_t* _getScenariosResponse,
                    const axutil_env_t *env,
                    adb_SecurityScenarioDataWrapper_t*  arg_return)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, AXIS2_FAILURE);
                
                if(_getScenariosResponse->is_valid_return &&
                        arg_return == _getScenariosResponse->property_return)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_getScenariosResponse_reset_return(_getScenariosResponse, env);

                
                if(NULL == arg_return)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _getScenariosResponse->property_return = arg_return;
                        _getScenariosResponse->is_valid_return = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for return
            */
           axis2_status_t AXIS2_CALL
           adb_getScenariosResponse_reset_return(
                   adb_getScenariosResponse_t* _getScenariosResponse,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, AXIS2_FAILURE);
               

               
            
                
                if(_getScenariosResponse->property_return != NULL)
                {
                   
                   adb_SecurityScenarioDataWrapper_free(_getScenariosResponse->property_return, env);
                     _getScenariosResponse->property_return = NULL;
                }
            
                
                
                _getScenariosResponse->is_valid_return = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether return is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_getScenariosResponse_is_return_nil(
                   adb_getScenariosResponse_t* _getScenariosResponse,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _getScenariosResponse, AXIS2_TRUE);
               
               return !_getScenariosResponse->is_valid_return;
           }

           /**
            * Set return to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_getScenariosResponse_set_return_nil(
                   adb_getScenariosResponse_t* _getScenariosResponse,
                   const axutil_env_t *env)
           {
               return adb_getScenariosResponse_reset_return(_getScenariosResponse, env);
           }

           

