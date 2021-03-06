/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTSourceMapsSupport.h>

@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport {

	NSDate* _usageDate;

}

@property (nonatomic,readonly) NSDate * usageDate;              //@synthesize usageDate=_usageDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)usageDate;
-(id)initWithUsageDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

