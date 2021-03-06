/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldPreventAutorotation;
	BOOL _allowsNowPlayingApplicationLaunch;
	BOOL _sortByIsVideoRoute;
	long long _style;
	NSString* _routingContextUID;
	NSString* _presentingAppBundleID;

}

@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                          //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (nonatomic,copy) NSString * presentingAppBundleID;                      //@synthesize presentingAppBundleID=_presentingAppBundleID - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventAutorotation;                      //@synthesize shouldPreventAutorotation=_shouldPreventAutorotation - In the implementation block
@property (assign,nonatomic) BOOL allowsNowPlayingApplicationLaunch;              //@synthesize allowsNowPlayingApplicationLaunch=_allowsNowPlayingApplicationLaunch - In the implementation block
@property (assign,nonatomic) BOOL sortByIsVideoRoute;                             //@synthesize sortByIsVideoRoute=_sortByIsVideoRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)routingContextUID;
-(NSString *)presentingAppBundleID;
-(BOOL)allowsNowPlayingApplicationLaunch;
-(BOOL)sortByIsVideoRoute;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)setPresentingAppBundleID:(NSString *)arg1 ;
-(BOOL)shouldPreventAutorotation;
-(void)setShouldPreventAutorotation:(BOOL)arg1 ;
-(void)setAllowsNowPlayingApplicationLaunch:(BOOL)arg1 ;
-(void)setSortByIsVideoRoute:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

