/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDFHIRResourceTask.h>

@class HDFHIRResourceSchema, NSDictionary;

@interface HDFHIRResourceQueryTask : HDFHIRResourceTask {

	NSDictionary* _bindings;
	/*^block*/id _queryCompletion;
	long long _queryMode;
	HDFHIRResourceSchema* _resourceSchema;

}

@property (nonatomic,copy,readonly) NSDictionary * bindings;                            //@synthesize bindings=_bindings - In the implementation block
@property (nonatomic,copy,readonly) id queryCompletion;                                 //@synthesize queryCompletion=_queryCompletion - In the implementation block
@property (nonatomic,readonly) long long queryMode;                                     //@synthesize queryMode=_queryMode - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRResourceSchema * resourceSchema;              //@synthesize resourceSchema=_resourceSchema - In the implementation block
-(NSDictionary *)bindings;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)createURLRequestWithCredentialResult:(id)arg1 error:(id*)arg2 ;
-(id)initWithCredentialedSession:(id)arg1 resourceSchema:(id)arg2 queryMode:(long long)arg3 bindings:(NSDictionary*)arg4 completion:(/*^block*/id)arg5 ;
-(id)queryCompletion;
-(HDFHIRResourceSchema *)resourceSchema;
-(long long)queryMode;
@end

