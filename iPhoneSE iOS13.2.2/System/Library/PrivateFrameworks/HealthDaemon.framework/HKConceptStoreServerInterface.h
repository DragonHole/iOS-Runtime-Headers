/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKConceptStoreServerInterface <NSObject>
@required
-(void)remote_startTaskServerIfNeeded;
-(void)remote_ontologyVersionWithCompletion:(/*^block*/id)arg1;
-(void)remote_conceptByResolvingContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_displayNamesByResolvingContexts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_queryConceptsByAttribute:(long long)arg1 withValue:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_queryConceptByID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_unitTest_queryConceptByExactNameMatch:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_queryConceptsByRelationship:(id)arg1 toNodeWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_queryConceptsByRelationship:(id)arg1 fromNodeWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_queryNodeNameForAttributeWithKeyID:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_queryRelationshipsForNodeWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(/*^block*/id)arg1;
-(void)remote_queryConceptsAssociatedToUserRecordsWithCompletion:(/*^block*/id)arg1;
-(void)remote_cleanUpAfterUnitTestWithCompletion:(/*^block*/id)arg1;
-(void)remote_resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)remote_currentIndexingState:(/*^block*/id)arg1;
-(void)remote_testTaskServerWithCompletion:(/*^block*/id)arg1;

@end

