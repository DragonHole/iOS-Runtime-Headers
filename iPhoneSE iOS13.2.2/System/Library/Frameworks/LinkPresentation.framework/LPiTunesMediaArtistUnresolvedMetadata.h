/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset;

@interface LPiTunesMediaArtistUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _genre;
	LPiTunesMediaAsset* _artwork;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * genre;                             //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)genre;
-(id)resolve;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(LPiTunesMediaAsset *)artwork;
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setGenre:(NSString *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(id)assetsToFetch;
@end

