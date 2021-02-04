/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/SFAirDropClassroomTransferDelegate.h>

@class NSSet, NSData, NSString, SFAirDropClassroomTransferManager, CRKAirDropTransferInfo, NSURL;

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate> {

	NSSet* mURLs;
	BOOL mKeepOriginalFiles;
	NSData* mPreviewImageData;
	NSString* mSenderName;
	BOOL mAutoAccept;
	NSString* mSourceBundleIdentifier;
	NSString* mFilesDescription;
	NSSet* mAirDropItems;
	SFAirDropClassroomTransferManager* mTransferManager;
	NSString* mTransferIdentifier;
	CRKAirDropTransferInfo* mTransferInfo;
	BOOL mTransferAccepted;
	BOOL mTransferFinished;
	NSURL* mTransferDirectoryURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fakeBundleID;
-(BOOL)isAsynchronous;
-(void)transferWithIdentifierWasAccepted:(id)arg1 ;
-(void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2 ;
-(id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 sourceBundleIdentifier:(id)arg6 ;
-(id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7 ;
-(void)startTransfer;
-(void)transferDidStartWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3 ;
-(void)transferDidProgressWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3 ;
-(void)transferDidFinishWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3 ;
-(void)succeedIfNeeded;
-(void)cleanupHiddenTransferItemsIfNeeded;
-(id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 ;
-(void)cancel;
-(void)main;
-(void)failWithError:(id)arg1 ;
@end
