/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@interface DDPreviewAction : DDAction
+(id)previewActionForURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)commitURL;
-(BOOL)wantsSeamlessCommit;
-(BOOL)requiresEmbeddingNavigationController;
-(id)platterTitle;
-(id)platterSubtitle;
-(id)createViewController;
-(void)dealloc;
-(id)viewController;
@end

