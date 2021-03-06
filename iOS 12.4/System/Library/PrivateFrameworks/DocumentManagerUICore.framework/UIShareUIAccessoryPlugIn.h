/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIShareUIAccessoryPlugIn <NSObject>
@property (nonatomic,__weak,readonly) id<UIShareUIAccessoryHosting> host; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) UIViewController*<UIShareUIAccessoryPresenting> inlineAccessoryViewController; 
@required
+(id)shareSheetPlugInWithPresentingHost:(id)arg1 URLs:(id)arg2;
-(void)commitPendingChanges;
-(UIViewController*<UIShareUIAccessoryPresenting>)inlineAccessoryViewController;
-(id<UIShareUIAccessoryHosting>)host;
-(NSArray *)URLs;

@end

