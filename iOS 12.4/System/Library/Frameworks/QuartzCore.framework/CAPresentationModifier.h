/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString, CAPresentationModifierGroup;

@interface CAPresentationModifier : NSObject {

	void* _impl;
	id _keyPath;
	id _value;
	id _group;
	int _l;
	unsigned _f;

}

@property (copy,readonly) NSString * keyPath; 
@property (readonly) BOOL additive; 
@property (readonly) CAPresentationModifierGroup * group; 
@property (retain) id value; 
@property (getter=isEnabled) BOOL enabled; 
-(Object*)CA_copyRenderValue;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 ;
-(BOOL)additive;
-(void)write;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)keyPath;
-(CAPresentationModifierGroup *)group;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 group:(id)arg4 ;
@end

