/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLMovieArtist : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier; 
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMovieArtistDictionary:(id)arg1 ;
-(id)copyMovieArtistDictionary;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)ITunesStoreIdentifier;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

