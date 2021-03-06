/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>
#import <libobjc.A.dylib/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, OADStroke, NSString;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	NSArray* mExts;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
	OADStroke* mStroke;
	unsigned mHasIsBehindText : 1;
	unsigned mIsBehindText : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setParent:(id)arg1 ;
-(id)stroke;
-(id)fill;
-(id)initWithDefaults;
-(BOOL)hasStroke;
-(BOOL)hasFill;
-(BOOL)hasEffects;
-(void)setStroke:(id)arg1 ;
-(void)setFill:(id)arg1 ;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(void)setIsBehindText:(BOOL)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)setExts:(id)arg1 ;
-(BOOL)hasExts;
-(BOOL)hasIsBehindText;
-(id)exts;
-(BOOL)isBehindText;
-(BOOL)hasNonEmptyFill;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
-(id)scene3D;
-(id)shape3D;
@end

