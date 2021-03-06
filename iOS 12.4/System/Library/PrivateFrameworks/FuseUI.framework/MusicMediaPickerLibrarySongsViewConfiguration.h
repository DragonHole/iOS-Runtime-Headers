/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibrarySongsViewConfiguration.h>

@interface MusicMediaPickerLibrarySongsViewConfiguration : MusicLibrarySongsViewConfiguration {

	BOOL _isMultipleSelectionAllowed;

}
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithMultipleSelectionAllowed:(BOOL)arg1 ;
-(void)_multipleSelectionAllowanceDidChange:(id)arg1 ;
-(void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

