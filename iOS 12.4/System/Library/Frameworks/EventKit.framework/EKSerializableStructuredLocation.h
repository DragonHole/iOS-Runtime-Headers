/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class CalLocation;

@interface EKSerializableStructuredLocation : EKSerializableObject {

	CalLocation* _calLocation;

}

@property (nonatomic,copy) CalLocation * calLocation;              //@synthesize calLocation=_calLocation - In the implementation block
+(id)classesForKey;
-(id)initWithStructuredLocation:(id)arg1 ;
-(id)createStructuredLocation;
-(void)setCalLocation:(CalLocation *)arg1 ;
-(CalLocation *)calLocation;
@end
