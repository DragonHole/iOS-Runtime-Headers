/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPXObserver.h>
#import <libobjc.A.dylib/NSFileProviderChangeObserver.h>

@class NSMutableArray, NSData, NSString;

@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver> {

	NSMutableArray* _changedItems;
	NSMutableArray* _deletedItemIDs;
	NSData* _originalSyncAnchor;
	/*^block*/id _finishedBlock;

}

@property (copy) id finishedBlock;                                  //@synthesize finishedBlock=_finishedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 previousChangeToken:(id)arg3 ;
-(void)didUpdateItems:(id)arg1 ;
-(void)didDeleteItemsWithIdentifiers:(id)arg1 ;
-(void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)finishEnumeratingWithError:(id)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
@end
