/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTChange : NSObject {

	NSString* _property;
	id _changedValue;
	id _originalValue;

}

@property (nonatomic,copy) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) id changedValue;                //@synthesize changedValue=_changedValue - In the implementation block
@property (nonatomic,retain) id originalValue;               //@synthesize originalValue=_originalValue - In the implementation block
-(id)description;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)originalValue;
-(void)setOriginalValue:(id)arg1 ;
-(id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3 ;
-(id)changedValue;
-(void)setChangedValue:(id)arg1 ;
@end
