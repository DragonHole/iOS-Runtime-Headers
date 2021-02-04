/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary;

@interface ML3ArtworkConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _artworkConfigurationDictionary;
	NSMutableDictionary* _supportedSizesCache;
	double _mainScreenScale;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                   //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * artworkConfigurationDictionary;              //@synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supportedSizesCache;                  //@synthesize supportedSizesCache=_supportedSizesCache - In the implementation block
@property (assign,nonatomic) double mainScreenScale;                                     //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)systemConfiguration;
-(NSMutableDictionary *)supportedSizesCache;
-(id)_supportedSizeKeysForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(NSDictionary *)artworkConfigurationDictionary;
-(void)setArtworkConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setSupportedSizesCache:(NSMutableDictionary *)arg1 ;
-(void)setMainScreenScale:(double)arg1 ;
-(id)supportedSizesForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)sizesToAutogenerateForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(double)mainScreenScale;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)description;
@end
