/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TKPickerItem : NSObject {

	long long _section;

}

@property (assign,setter=_setSection:,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
-(void)_setSection:(long long)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(BOOL)arg2 toString:(id)arg3 ;
-(id)description;
-(long long)section;
@end
