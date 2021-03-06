//
//  JFGTakePhotoButton.h
//  JiafeigouiOS
//
//  Created by 杨利 on 2017/3/17.
//  Copyright © 2017年 lirenguang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFGTakePhotoButton;

typedef NS_ENUM(NSUInteger, JFGTakePhotoTouchEvents) {
    JFGTakePhotoTouchSingleTap,
    JFGTakePhotoTouchLongTap,
};

@protocol JFGTakePhotoTouchActionDelegate <NSObject>

//长按，短按开始
-(void)takePhotoTouchUpDown:(JFGTakePhotoButton *)btn forTakePhotoEvents:(JFGTakePhotoTouchEvents)controlEvents;

//长按结束
-(void)takePhotoTouchLongTapEnd;

@end

@interface JFGTakePhotoButton : UIButton

@property (nonatomic,weak)id <JFGTakePhotoTouchActionDelegate> delegate;

@end
