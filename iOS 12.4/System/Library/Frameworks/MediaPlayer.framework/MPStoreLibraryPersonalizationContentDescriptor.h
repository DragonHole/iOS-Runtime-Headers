/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {

	MPModelObject* _model;
	long long _personalizationStyle;

}

@property (nonatomic,readonly) MPModelObject * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1 ;
+(id)_lightweightPersonalizationPropertiesForStoreAsset;
+(id)_lightweightPersonalizationPropertiesForPlaybackPosition;
-(long long)personalizationStyle;
-(id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2 ;
-(MPModelObject *)model;
@end
