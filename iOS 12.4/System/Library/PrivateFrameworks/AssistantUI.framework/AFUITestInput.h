/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFUIRequestOptions;

@interface AFUITestInput : NSObject {

	AFUIRequestOptions* _requestOptions;

}

@property (nonatomic,readonly) AFUIRequestOptions * requestOptions;              //@synthesize requestOptions=_requestOptions - In the implementation block
+(id)_baseRequestOptions;
-(AFUIRequestOptions *)requestOptions;
-(id)_initWithRequestOptions:(id)arg1 ;
-(id)initWithRecordedSpeechURL:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
@end
