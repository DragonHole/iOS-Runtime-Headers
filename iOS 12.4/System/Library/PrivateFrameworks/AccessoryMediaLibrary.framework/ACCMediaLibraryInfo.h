/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACCMediaLibraryUpdateLibraryInfo;

@interface ACCMediaLibraryInfo : NSObject {

	BOOL _state[2];
	BOOL _stateInit[2];
	NSString* _libraryUID;
	ACCMediaLibraryUpdateLibraryInfo* _info;

}

@property (nonatomic,readonly) NSString * libraryUID;                                //@synthesize libraryUID=_libraryUID - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryUpdateLibraryInfo * info;              //@synthesize info=_info - In the implementation block
-(NSString *)libraryUID;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)setState:(int)arg1 value:(BOOL)arg2 ;
-(BOOL)getState:(int)arg1 ;
-(id)description;
-(ACCMediaLibraryUpdateLibraryInfo *)info;
@end
