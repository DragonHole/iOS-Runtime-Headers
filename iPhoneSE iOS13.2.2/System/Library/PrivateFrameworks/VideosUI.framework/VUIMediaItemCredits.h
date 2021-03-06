/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <NSCopying> {

	NSOrderedSet* _cast;
	NSOrderedSet* _directors;
	NSOrderedSet* _producers;
	NSOrderedSet* _screenwriters;

}

@property (nonatomic,copy) NSOrderedSet * cast;                       //@synthesize cast=_cast - In the implementation block
@property (nonatomic,copy) NSOrderedSet * directors;                  //@synthesize directors=_directors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * producers;                  //@synthesize producers=_producers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * screenwriters;              //@synthesize screenwriters=_screenwriters - In the implementation block
@property (nonatomic,readonly) BOOL hasCredits; 
+(id)_arrayFromStringRepresentation:(id)arg1 ;
+(id)_stringRepresentationFromArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSOrderedSet *)producers;
-(void)setProducers:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)directors;
-(void)setDirectors:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)screenwriters;
-(void)setScreenwriters:(NSOrderedSet *)arg1 ;
-(void)setCast:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)cast;
-(BOOL)hasCredits;
@end

