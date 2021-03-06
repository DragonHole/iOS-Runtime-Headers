/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ComponentKit/ComponentKit-Structs.h>
@class NSLayoutManager, NSTextStorage, NSTextContainer;

@interface CKTextKitContext : NSObject {

	mutex _textKitMutex;
	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;

}
-(id)initWithAttributedString:(id)arg1 lineBreakMode:(long long)arg2 maximumNumberOfLines:(unsigned long long)arg3 constrainedSize:(CGSize)arg4 layoutManagerFactory:(/*function pointer*/void*)arg5 ;
-(void)performBlockWithLockedTextKitComponents:(/*^block*/id)arg1 ;
@end

