/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction {

	NSArray* _inputContentClasses;
	NSArray* _fileTypes;

}

@property (nonatomic,readonly) NSArray * fileTypes;              //@synthesize fileTypes=_fileTypes - In the implementation block
-(id)name;
-(id)identifier;
-(NSArray *)fileTypes;
-(id)inputContentClasses;
-(id)descriptionDictionary;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)fileTypeForOpeningItem:(id)arg1 ;
@end
