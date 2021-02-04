/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class NSString, CKContainer;

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	NSString* _applicationFromURL;
	NSString* _titleFromURL;
	CKContainer* _baseContainer;
	CKContainer* _applicationContainer;
	BOOL _canceled;

}
+(id)specializedMetadataProviderForURL:(id)arg1 ;
+(id)extractApplicationFromURL:(id)arg1 ;
+(id)extractTitleFromURL:(id)arg1 ;
+(id)applicationNameMap;
-(void)fail;
-(id)initWithURL:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3 ;
-(id)entitlementForKey:(id)arg1 ;
-(BOOL)canUseCloudKit;
-(void)completeUsingApplication:(id)arg1 title:(id)arg2 ;
-(void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2 ;
-(id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)iconFromShare:(id)arg1 ;
-(void)cancel;
-(void)start;
@end
