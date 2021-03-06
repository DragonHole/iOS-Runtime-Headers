/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject {

	UIDocument* _document;
	id _wrappedRecoveryAttempter;
	/*^block*/id _continuerOrNil;
	long long _silentRecoveryOptionIndex;
	/*^block*/id _appModalRecoveryAttempter;
	/*^block*/id _recoveryCancelerOrNil;
	SCD_Struct_UI20 _errorRecoveryAttempterFlags;

}
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(BOOL)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2 ;
-(void)cancelRecovery;
-(id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2 ;
-(id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(/*^block*/id)arg3 recoveryCanceler:(/*^block*/id)arg4 ;
@end

