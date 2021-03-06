/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKKeyValueDomainServerInterface.h>
#import <libobjc.A.dylib/HKUnitTestingTaskServerInterface.h>

@class HDKeyValueDomain;

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface, HKUnitTestingTaskServerInterface> {

	HDKeyValueDomain* _keyValueDomain;

}
+(id)taskIdentifier;
+(id)requiredEntitlements;
+(Class)configurationClass;
+(BOOL)validateConfiguration:(id)arg1 error:(out id*)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 ;
-(id)remoteInterface;
-(Class)_keyValueEntityClass;
-(void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_numberForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_dateForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_stringForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_allValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)_unitTest_overrideKeyValueDomainCategory:(long long)arg1 ;
-(id)exportedInterface;
@end

