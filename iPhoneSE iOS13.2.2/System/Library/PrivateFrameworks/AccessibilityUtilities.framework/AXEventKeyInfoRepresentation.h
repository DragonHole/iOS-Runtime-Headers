/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	BOOL _keyDown;
	unsigned short _keyCode;
	unsigned short _alternativeKeyCode;
	unsigned _usagePage;
	unsigned _modifierState;
	unsigned _gsModifierState;
	NSString* _unmodifiedInput;
	NSString* _modifiedInput;
	NSString* _shiftModifiedInput;

}

@property (assign,nonatomic) unsigned short keyCode;                         //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned short alternativeKeyCode;              //@synthesize alternativeKeyCode=_alternativeKeyCode - In the implementation block
@property (assign,nonatomic) unsigned usagePage;                             //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL keyDown;                                   //@synthesize keyDown=_keyDown - In the implementation block
@property (nonatomic,retain) NSString * unmodifiedInput;                     //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * modifiedInput;                       //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;                  //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned modifierState;                         //@synthesize modifierState=_modifierState - In the implementation block
@property (assign,nonatomic) unsigned gsModifierState;                       //@synthesize gsModifierState=_gsModifierState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)keyCode;
-(NSString *)unmodifiedInput;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(NSString *)shiftModifiedInput;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(void)setKeyCode:(unsigned short)arg1 ;
-(unsigned)modifierState;
-(void)setUsagePage:(unsigned)arg1 ;
-(void)setKeyDown:(BOOL)arg1 ;
-(void)setModifiedInput:(NSString *)arg1 ;
-(void)setModifierState:(unsigned)arg1 ;
-(void)setGsModifierState:(unsigned)arg1 ;
-(void)setAlternativeKeyCode:(unsigned short)arg1 ;
-(unsigned)gsModifierState;
-(NSString *)modifiedInput;
-(unsigned)usagePage;
-(unsigned short)alternativeKeyCode;
-(BOOL)keyDown;
-(GSKeyboardRef)_getUIKitKeyboardRef;
-(void)translateStringToKeycode;
-(void)translateKeycode;
@end

