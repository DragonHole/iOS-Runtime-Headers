/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTAction, NSArray;

@interface RTActionCondition : NSObject <NSSecureCoding> {

	RTAction* _action;
	NSArray* _dateIntervals;

}

@property (nonatomic,readonly) RTAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSArray * dateIntervals;              //@synthesize dateIntervals=_dateIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToActionCondition:(id)arg1 ;
-(id)initWithAction:(id)arg1 dateIntervals:(id)arg2 ;
-(NSArray *)dateIntervals;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(RTAction *)action;
@end

