/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSDate;

@interface MovingAverageEntry : HMFObject {

	NSNumber* _value;
	NSDate* _date;

}

@property (readonly) NSNumber * value;              //@synthesize value=_value - In the implementation block
@property (readonly) NSDate * date;                 //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(NSNumber *)value;
-(id)initWithValue:(id)arg1 ;
@end
