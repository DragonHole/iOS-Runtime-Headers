/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDelegate <NSObject>
@optional
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
-(void)passLibraryReceivedInterruption;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;

@end
