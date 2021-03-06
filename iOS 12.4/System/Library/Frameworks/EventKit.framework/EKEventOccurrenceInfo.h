/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject {

	EKObjectID* _objectID;
	double _date;

}

@property (nonatomic,retain) EKObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) double date;                        //@synthesize date=_date - In the implementation block
-(id)initWithObjectID:(id)arg1 date:(double)arg2 ;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(EKObjectID *)objectID;
-(id)description;
-(double)date;
-(void)setDate:(double)arg1 ;
@end

