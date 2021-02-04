/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSURL, NSObject, NSURLSession, NSString;

@interface HMDServerBag : HMFObject <NSURLSessionDelegate> {

	BOOL _refreshing;
	NSDictionary* _dictionaryRepresentation;
	unsigned long long _environment;
	NSURL* _url;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSURLSession* _urlSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                  //@synthesize urlSession=_urlSession - In the implementation block
@property (assign,nonatomic) BOOL refreshing;                                              //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionaryRepresentation;                        //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long environment;                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * activationHostnameURL; 
@property (nonatomic,copy,readonly) NSURL * activationCertificateHostnameURL; 
@property (nonatomic,copy,readonly) NSURL * accessoryReportURL; 
@property (nonatomic,readonly) double accessoryReportTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverBagURLForEnvironment:(unsigned long long)arg1 ;
+(id)activationHostnameURLOverride;
+(id)activationCertificateHostnameURLOverride;
+(id)defaultServerBag;
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSURLSession *)urlSession;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)_loadDefaultBag;
-(void)_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)refreshing;
-(void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRefreshing:(BOOL)arg1 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(NSURL *)activationHostnameURL;
-(NSURL *)activationCertificateHostnameURL;
-(NSURL *)accessoryReportURL;
-(double)accessoryReportTimeout;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)initWithEnvironment:(unsigned long long)arg1 ;
-(NSURL *)url;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)environment;
@end
