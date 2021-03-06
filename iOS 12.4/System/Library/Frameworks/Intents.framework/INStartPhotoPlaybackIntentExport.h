/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;


@protocol INStartPhotoPlaybackIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) CLPlacemark * locationCreated; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long includedAttributes; 
@property (assign,nonatomic) unsigned long long excludedAttributes; 
@property (nonatomic,copy) NSArray * peopleInPhoto; 
@required
-(void)setLocationCreated:(id)arg1;
-(void)setSearchTerms:(id)arg1;
-(void)setIncludedAttributes:(unsigned long long)arg1;
-(void)setExcludedAttributes:(unsigned long long)arg1;
-(void)setPeopleInPhoto:(id)arg1;
-(unsigned long long)excludedAttributes;
-(void)setDateCreated:(id)arg1;
-(NSString *)albumName;
-(void)setAlbumName:(id)arg1;
-(unsigned long long)includedAttributes;
-(NSArray *)searchTerms;
-(CLPlacemark *)locationCreated;
-(NSArray *)peopleInPhoto;
-(INDateComponentsRange *)dateCreated;
-(id)init;

@end

