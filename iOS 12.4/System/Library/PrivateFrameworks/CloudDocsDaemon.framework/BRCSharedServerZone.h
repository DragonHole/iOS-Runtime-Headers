/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class NSString, BRCSharedClientZone;

@interface BRCSharedServerZone : BRCServerZone {

	NSString* _ownerName;

}

@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedClientZone * clientZone; 
-(BRCSharedClientZone *)clientZone;
-(BOOL)isSharedZone;
-(id)asSharedZone;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4 ;
-(BOOL)isPrivateZone;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)allocateRanks;
-(long long)_propagateDeleteToChildrenOfItemID:(id)arg1 ;
-(BOOL)_propagateFolderDeletesToTheirChildren;
-(id)ownerName;
@end

