/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString;

@interface CADisplayModeCriteria : NSObject {

	CADisplayModeCriteriaPriv* _priv;

}

@property (assign) CGSize resolution; 
@property (assign) double refreshRate; 
@property (copy) NSString * hdrMode; 
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
-(id)init;
-(void)dealloc;
-(double)refreshRate;
-(NSString *)hdrMode;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(NSString *)arg1 ;
@end

