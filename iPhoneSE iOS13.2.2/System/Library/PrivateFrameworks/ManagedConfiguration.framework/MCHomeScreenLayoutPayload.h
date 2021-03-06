/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCHomeScreenLayoutPayload : MCPayload {

	NSArray* _layout;

}

@property (nonatomic,retain) NSArray * layout;              //@synthesize layout=_layout - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)parseIconsArray:(id)arg1 allowFolders:(BOOL)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(NSArray *)layout;
-(id)payloadDescriptionKeyValueSections;
-(void)setLayout:(NSArray *)arg1 ;
@end

