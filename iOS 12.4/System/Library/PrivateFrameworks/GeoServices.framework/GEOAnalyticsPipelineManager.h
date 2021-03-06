/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOAnalyticsPipelineProxy.h>

@protocol GEOAnalyticsPipelineProxy;
@class NSString;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {

	id<GEOAnalyticsPipelineProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)useProxyClass:(Class)arg1 ;
+(id)sharedManager;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
@end

