/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell {

	BOOL _dateSlot;
	BOOL _active;
	BOOL _enabled;
	NSString* _slot;
	NTKComplication* _complication;

}

@property (nonatomic,readonly) NSString * slot;                           //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) BOOL dateSlot;                             //@synthesize dateSlot=_dateSlot - In the implementation block
@property (assign,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
+(id)reuseIdentifier;
-(NSString *)slot;
-(NTKComplication *)complication;
-(void)_updateDetailText;
-(id)_activeColor;
-(id)_inactiveColor;
-(id)initWithSlot:(id)arg1 dateSlot:(BOOL)arg2 inFace:(id)arg3 ;
-(void)setComplication:(NTKComplication *)arg1 ;
-(BOOL)dateSlot;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)rowHeight;
-(void)_updateState;
-(id)_disabledColor;
-(BOOL)enabled;
@end
