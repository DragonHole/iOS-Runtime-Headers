/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAudiobookCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)audiobookCollection;
+(id)audiobookCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
@end
