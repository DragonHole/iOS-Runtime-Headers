/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject {

	WLKStoredConfiguration* _storedConfiguration;

}

@property (nonatomic,retain) WLKStoredConfiguration * storedConfiguration;              //@synthesize storedConfiguration=_storedConfiguration - In the implementation block
+(id)sharedInstance;
-(void)_handleConfigChange:(id)arg1 ;
-(void)_handleLibraryChange:(id)arg1 ;
-(void)_handleAccountChange:(id)arg1 ;
-(void)_setStoredConfiguration:(id)arg1 ;
-(void)_invalidateWithReason:(id)arg1 ;
-(WLKStoredConfiguration *)storedConfiguration;
-(void)setStoredConfiguration:(WLKStoredConfiguration *)arg1 ;
-(id)init;
-(void)dealloc;
@end

