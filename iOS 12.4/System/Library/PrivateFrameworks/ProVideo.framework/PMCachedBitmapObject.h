/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PMCachedBitmapObject : NSObject {

	shared_ptr<PCBitmap>* _bitmap;

}
-(id)initWithBitmap:(const shared_ptr<PCBitmap>*)arg1 ;
-(shared_ptr<PCBitmap>*)bitmap;
-(void)dealloc;
@end
