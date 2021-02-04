/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUArtworkCellContext.h>

@interface SUItemCellContext : SUArtworkCellContext {

	CFDictionaryRef _cachedRatingImages;
	SCD_Struct_SU7* _stringSizeCacheKeyCallBacks;
	CFDictionaryRef _stringSizes;

}

@property (assign,nonatomic) SCD_Struct_SU7* stringSizeCacheKeyCallBacks;              //@synthesize stringSizeCacheKeyCallBacks=_stringSizeCacheKeyCallBacks - In the implementation block
-(void)resetLayoutCaches;
-(id)ratingImageForRating:(float)arg1 style:(long long)arg2 ;
-(CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(SCD_Struct_SU7*)stringSizeCacheKeyCallBacks;
-(void)setStringSizeCacheKeyCallBacks:(SCD_Struct_SU7*)arg1 ;
-(id)init;
-(void)dealloc;
@end
