/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableSet;

@interface _BRCUploadInfo : _BRCTransferInfo {

	NSMutableSet* _outOfQuotaDocIDs;

}

@property (nonatomic,readonly) NSMutableSet * outOfQuotaDocIDs;              //@synthesize outOfQuotaDocIDs=_outOfQuotaDocIDs - In the implementation block
@property (nonatomic,readonly) BOOL allUploadsPendingQuota; 
-(id)init;
-(id)description;
-(void)updateLocalizedDescriptionWithOptions:(char)arg1 ;
-(void)copyProgressInfoToProgress:(id)arg1 options:(char)arg2 ;
-(NSMutableSet *)outOfQuotaDocIDs;
-(BOOL)allUploadsPendingQuota;
@end

