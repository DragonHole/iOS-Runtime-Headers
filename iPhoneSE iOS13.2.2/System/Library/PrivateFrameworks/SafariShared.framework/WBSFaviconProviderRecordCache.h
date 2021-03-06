/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {

	NSMutableDictionary* _iconURLStringToInfoDictionary;
	NSMutableDictionary* _iconUUIDToURLStringDictionary;

}
-(id)init;
-(id)iconInfoForURLString:(id)arg1 ;
-(void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 ;
-(id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id*)arg2 size:(CGSize*)arg3 ;
-(void)removeAllRecords;
-(void)removeRecordForIconUUIDs:(id)arg1 ;
@end

