/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, MTVibrantStyling, NSString;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_UI58 _builtinTraits;
	NSDictionary* _clientDefinedTraits;

}

@property (nonatomic,readonly) MTVibrantStyling * primaryVibrantStyling; 
@property (nonatomic,readonly) MTVibrantStyling * secondaryVibrantStyling; 
@property (nonatomic,readonly) MTVibrantStyling * tertiaryVibrantStyling; 
@property (getter=music_isContainedWithinSplitViewDetail,nonatomic,readonly) BOOL music_containedWithinSplitViewDetail; 
@property (getter=music_isContainedWithinSplitViewPrimary,nonatomic,readonly) BOOL music_containedWithinSplitViewPrimary; 
@property (nonatomic,readonly) BOOL MPU_hasCompactHeight; 
@property (nonatomic,readonly) BOOL MPU_hasCompactWidth; 
@property (nonatomic,readonly) BOOL MPU_hasRegularHeight; 
@property (nonatomic,readonly) BOOL MPU_hasRegularWidth; 
@property (nonatomic,readonly) long long barMetrics; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long forceTouchCapability; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@property (nonatomic,readonly) long long displayGamut; 
+(id)traitCollectionWithPrimaryVibrantStyling:(id)arg1 ;
+(id)traitCollectionWithSecondaryVibrantStyling:(id)arg1 ;
+(id)traitCollectionWithTertiaryVibrantStyling:(id)arg1 ;
+(id)music_traitCollectionWithContainedWithinSplitViewDetail:(BOOL)arg1 ;
+(id)music_traitCollectionWithContainedWithinSplitViewPrimary:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)traitCollectionWithUserInterfaceStyle:(long long)arg1 ;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
+(id)traitCollectionWithBarMetrics:(long long)arg1 ;
+(id)traitCollectionWithBarPosition:(long long)arg1 ;
+(id)traitCollectionWithPreferredContentSizeCategory:(id)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)_defaultTraitCollection;
+(id)_emptyTraitCollection;
+(id)traitCollectionWithForceTouchCapability:(long long)arg1 ;
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(id)traitCollectionWithDisplayGamut:(long long)arg1 ;
+(id)traitCollectionWithLayoutDirection:(long long)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithTouchLevel:(long long)arg1 ;
+(id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1 ;
+(id)traitCollectionWithDisplayCornerRadius:(double)arg1 ;
-(BOOL)tsu_isCompactWidth;
-(BOOL)tsu_isCompactHeight;
-(MTVibrantStyling *)primaryVibrantStyling;
-(MTVibrantStyling *)tertiaryVibrantStyling;
-(MTVibrantStyling *)secondaryVibrantStyling;
-(BOOL)music_isContainedWithinSplitViewPrimary;
-(BOOL)music_isContainedWithinSplitViewDetail;
-(BOOL)isLargeTextTraitCollection;
-(BOOL)mf_supportsPopoverPresentation;
-(BOOL)mf_hasCompactDimension;
-(long long)mf_correspondingBarMetrics;
-(BOOL)MPU_hasCompactHeight;
-(BOOL)MPU_hasCompactWidth;
-(BOOL)MPU_hasRegularWidth;
-(BOOL)MPU_hasRegularHeight;
-(BOOL)isPreferredContentSizeCategoryAccessible;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(double)displayScale;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)userInterfaceIdiom;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(long long)horizontalSizeClass;
-(long long)verticalSizeClass;
-(long long)userInterfaceStyle;
-(long long)barMetrics;
-(id)_valueForTraitNamed:(id)arg1 ;
-(long long)barPosition;
-(unsigned long long)primaryInteractionModel;
-(long long)layoutDirection;
-(unsigned long long)interactionModel;
-(id)_description;
-(BOOL)_changedContentSizeCategoryFromTraitCollection:(id)arg1 ;
-(unsigned long long)artworkSubtype;
-(long long)forceTouchCapability;
-(long long)_compare:(id)arg1 ;
-(long long)displayGamut;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI58*)arg1 clientDefinedTraits:(id)arg2 ;
-(BOOL)_matchesIntersectionWithTraitCollection:(id)arg1 ;
-(id)_namedImageDescription;
-(id)_descriptionWithPrivateTraits:(BOOL)arg1 ;
-(id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2 ;
-(long long)touchLevel;
-(double)displayCornerRadius;
@end

