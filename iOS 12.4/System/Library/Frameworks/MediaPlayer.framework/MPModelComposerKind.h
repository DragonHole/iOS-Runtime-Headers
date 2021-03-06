/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelAlbumKind;

@interface MPModelComposerKind : MPModelKind {

	MPModelAlbumKind* _albumKind;

}

@property (nonatomic,copy,readonly) MPModelAlbumKind * albumKind;              //@synthesize albumKind=_albumKind - In the implementation block
+(id)kindWithAlbumKind:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)humanDescription;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(MPModelAlbumKind *)albumKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

