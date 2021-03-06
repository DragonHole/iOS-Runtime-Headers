/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFMeasureResult.h>

@class NSError, NSString;

@interface WFMeasureThroughputResult : NSObject <WFMeasureResult> {

	NSError* _error;
	double _downlinkThroughput;

}

@property (nonatomic,copy,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double downlinkThroughput;              //@synthesize downlinkThroughput=_downlinkThroughput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(double)downlinkThroughput;
-(id)initWithResult:(double)arg1 andError:(id)arg2 ;
@end

