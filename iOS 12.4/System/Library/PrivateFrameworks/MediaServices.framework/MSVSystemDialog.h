/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSMutableArray, MSVSystemDialogOptions, NSArray;

@interface MSVSystemDialog : NSObject {

	NSMutableArray* _textFields;
	CFUserNotificationRef _presentedUserNotification;
	CFRunLoopSourceRef _activeRunLoopSource;
	/*^block*/id _pendingCompletion;
	MSVSystemDialogOptions* _options;

}

@property (assign,nonatomic) CFUserNotificationRef presentedUserNotification; 
@property (assign,nonatomic) CFRunLoopSourceRef activeRunLoopSource; 
@property (nonatomic,copy) id pendingCompletion; 
@property (nonatomic,readonly) MSVSystemDialogOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * textFields;                                       //@synthesize textFields=_textFields - In the implementation block
+(id)systemDialogWithOptions:(id)arg1 ;
-(void)setPresentedUserNotification:(CFUserNotificationRef)arg1 ;
-(void)setActiveRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)presentedUserNotification;
-(CFRunLoopSourceRef)activeRunLoopSource;
-(void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
-(void)clearTextFields;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(id)pendingCompletion;
-(void)setPendingCompletion:(id)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)dealloc;
-(NSArray *)textFields;
-(void)dismiss;
-(MSVSystemDialogOptions *)options;
-(id)initWithOptions:(id)arg1 ;
@end

