/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@protocol IXInitiatingOrUpdatingCoordinator;
@class NSString, IXAppInstallCoordinator;

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver> {

	/*^block*/id _completion;
	NSString* _bundleID;
	IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> _coordinator;

}

@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)bundleID;
-(void)setCoordinator:(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)arg1 ;
-(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)coordinator;
@end
