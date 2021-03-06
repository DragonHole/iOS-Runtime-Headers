/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLLibrary;
@class NSURL, SCNMTLLibraryManager;

@interface SCNMTLLibrary : NSObject {

	NSURL* _libraryURL;
	SCNMTLLibraryManager* _manager;
	id<MTLLibrary> _library;

}

@property (nonatomic,readonly) id<MTLLibrary> library;              //@synthesize library=_library - In the implementation block
-(id)initWithPath:(id)arg1 manager:(id)arg2 ;
-(id<MTLLibrary>)library;
-(void)dealloc;
-(void)_load;
@end

